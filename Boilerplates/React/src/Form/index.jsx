import React, { Component } from 'react'
import { Form, Field } from 'react-final-form'

class MyForm extends Component {
  render = () => (
    <Form
      initialValues={{ phone: 122, phone2: '555' }}
      onSubmit={(fields) => new Promise((res) => setTimeout(() => res({ phone: 'deu pau no submit'}), 3000))}
      render={(props) => (
        <form id="ooo" onSubmit={props.handleSubmit}>
          <Field validate={field => new Promise((res) => setTimeout(() => res(field == 'hugo' && 'Usuário já existe'), 3000))} name="phone">
            {({ input, meta }) => {
              return (
                <div>
                  <label>Phone</label>
                  <input type="text" {...input} placeholder="Phone" />
                  <span>{props.submitting && 'enviando...'}</span>
                  <span>{props.validating && 'validando...'}</span>
                  <span>{meta.error || meta.submitError}</span>
                </div>
              )
            }}
          </Field>
          <Field validate={val => !val && 'não podevazio'} name="phone2">
            {({ input, meta }) => {
              return (
                <div>
                  <label>Phone2</label>
                  <input type="text" value={input.value} onChange={input.onChange} placeholder="Phone" />
                  {<span>{`${meta.touched}`}</span>}
                </div>
              )
            }}
          </Field>

          <button form="ooo" type="submit">
            Submit
        </button>

          <button onClick={() => setTimeout(console.log, 0)}>
            Reset
        </button>
        </form>
      )}
    />
  )
}

export default MyForm